//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMDarenPublishEditBaseView.h"

@class UILabel;

@interface GDMDarenPublishProductEnterView : GDMDarenPublishEditBaseView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_numberLabel;	// 16 = 0x10
    UILabel *_fontLabel;	// 24 = 0x18
    UILabel *_backLabel;	// 32 = 0x20
}

+ (float)editViewHeight;
- (void).cxx_destruct;
- (void)updateWithItem:(id)arg1;
- (void)onButtonCallBack:(id)arg1;
- (id)title;
- (void)setTitleHide:(_Bool)arg1;
- (int)elemetnType;
- (void)createUIWithRect:(struct CGRect)arg1 item:(id)arg2;

@end

