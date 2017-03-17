//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView, WCDataItem;

__attribute__((visibility("hidden")))
@interface WCAdvertiseActionFloatView : MMUIView <CAAnimationDelegate>
{
    WCDataItem *m_item;
    UIButton *m_unInterestBtn;
    UILabel *m_tipLabel;
    UIImageView *m_bgView;
    UIView *m_lineView;
}

@property(readonly, nonatomic) UIButton *m_unInterestBtn; // @synthesize m_unInterestBtn;
@property(readonly, nonatomic) WCDataItem *m_item; // @synthesize m_item;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hide;
- (void)showWithItemData:(id)arg1 tipPoint:(struct CGPoint)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
