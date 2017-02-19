//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TableBindViewDelegate.h"

@class MDProfileTitleView, MDUserProfile, NSString, UIButton, UIImageView, UILabel, UIView;

@interface MDProfileAccountCell : UITableViewCell <TableBindViewDelegate>
{
    _Bool _isMiniMode;
    MDProfileTitleView *_titleView;
    UIImageView *_levelProgressView;
    UILabel *_levelLabel;
    UILabel *_levelSubLabel;
    UIImageView *_levelArrow;
    UIImageView *_vipProgressView;
    UILabel *_vipLabel;
    UILabel *_vipSubLabel;
    UIImageView *_vipArrow;
    UIView *_lineView;
    MDUserProfile *_upi;
    UIButton *_vipButton;
    UIButton *_levelButton;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) UIButton *levelButton; // @synthesize levelButton=_levelButton;
@property(retain, nonatomic) UIButton *vipButton; // @synthesize vipButton=_vipButton;
@property(nonatomic) _Bool isMiniMode; // @synthesize isMiniMode=_isMiniMode;
@property(retain, nonatomic) MDUserProfile *upi; // @synthesize upi=_upi;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *vipArrow; // @synthesize vipArrow=_vipArrow;
@property(retain, nonatomic) UILabel *vipSubLabel; // @synthesize vipSubLabel=_vipSubLabel;
@property(retain, nonatomic) UILabel *vipLabel; // @synthesize vipLabel=_vipLabel;
@property(retain, nonatomic) UIImageView *vipProgressView; // @synthesize vipProgressView=_vipProgressView;
@property(retain, nonatomic) UIImageView *levelArrow; // @synthesize levelArrow=_levelArrow;
@property(retain, nonatomic) UILabel *levelSubLabel; // @synthesize levelSubLabel=_levelSubLabel;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) UIImageView *levelProgressView; // @synthesize levelProgressView=_levelProgressView;
@property(retain, nonatomic) MDProfileTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)vipButtonAction;
- (void)levelButtonAction;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
