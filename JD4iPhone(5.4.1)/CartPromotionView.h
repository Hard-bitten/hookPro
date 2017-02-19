//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CartPromotionCell, JDSKUModel, NSArray, NSMutableArray, NSString, UITableView;

@interface CartPromotionView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _selectionBlock;
    CartPromotionCell *_selectedCell;
    UITableView *_tableView;
    JDSKUModel *_skuModel;
    NSArray *_promotionModels;
    NSMutableArray *_accessElements;
}

@property(retain, nonatomic) NSMutableArray *accessElements; // @synthesize accessElements=_accessElements;
@property(retain, nonatomic) NSArray *promotionModels; // @synthesize promotionModels=_promotionModels;
@property(retain, nonatomic) JDSKUModel *skuModel; // @synthesize skuModel=_skuModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CartPromotionCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
- (void).cxx_destruct;
- (void)updateAccessibility;
- (void)hideView;
- (void)drawRect:(struct CGRect)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)closeAction:(id)arg1;
- (id)initWithInfo:(id)arg1 viewHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
