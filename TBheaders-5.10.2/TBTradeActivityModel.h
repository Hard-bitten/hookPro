//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class NSMutableArray;

@interface TBTradeActivityModel : TBTradeComponentModel
{
    NSMutableArray *_giftArray;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *giftArray; // @synthesize giftArray=_giftArray;
- (void).cxx_destruct;
- (void)loadGiftArray:(id)arg1;
- (_Bool)checkGifts:(id *)arg1;
- (_Bool)isValidQuantityAndReturnError:(id *)arg1;
- (unsigned long long)validGiftQuantity;
- (id)gifts;
- (long long)maxGiftQuantity;
- (id)name;
- (id)summary;
- (id)promotionId;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

@end
