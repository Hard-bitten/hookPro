//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, TBFavoriteCategoryCollectionView;

@protocol TBFavoriteCategoryCollectionViewDelegate <NSObject>
- (void)categoryCollectionViewHasNoItemsSeleted:(TBFavoriteCategoryCollectionView *)arg1;
- (void)categoryCollectionViewHasItemsSelected:(TBFavoriteCategoryCollectionView *)arg1;
- (void)categoryCollectionViewSummaryCellDonationButtonClicked:(TBFavoriteCategoryCollectionView *)arg1;
- (void)categoryCollectionViewSummaryCellEditButtonClicked:(TBFavoriteCategoryCollectionView *)arg1;
- (void)categoryCollectionViewSummaryCellShareButtonClicked:(TBFavoriteCategoryCollectionView *)arg1;
- (void)categoryCollectionViewWillShowLastCell:(TBFavoriteCategoryCollectionView *)arg1;
- (void)categoryCollectionView:(TBFavoriteCategoryCollectionView *)arg1 didSelectItemAtIndex:(NSIndexPath *)arg2;

@optional
- (void)categoryCollectionViewSummaryCellSaveScreenButtonClicked:(TBFavoriteCategoryCollectionView *)arg1;
- (void)categoryCollectionViewAddButtonClicked:(TBFavoriteCategoryCollectionView *)arg1;
@end
