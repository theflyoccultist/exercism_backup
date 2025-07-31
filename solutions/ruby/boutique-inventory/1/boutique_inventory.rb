class BoutiqueInventory
  def initialize(items)
    @items = items
  end

  def item_names
    items.map { |item| item[:name] }.sort
  end

  def cheap
    items.select { |item| item[:price] < 30 }
  end

  def out_of_stock
    items.select { |item| item[:quantity_by_size].empty? }
  end

  def stock_for_item(name)
    item = items.find { |item| item[:name] == name }
    item ? item[:quantity_by_size] : nil
  end

  def total_stock
    item = items.find { |item| item[:quantity_by_size] }
    item ? item[:quantity_by_size].sum { |_, num| num } : 0
  end

  private

  attr_reader :items
end
