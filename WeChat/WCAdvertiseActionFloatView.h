//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UIImageView, UILabel, UIView, WCDataItem;

@interface WCAdvertiseActionFloatView : MMUIView
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

@end
