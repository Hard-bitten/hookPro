//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, TBQGWeatherExtendModel, UIButton, UIImageView, UILabel, UIView;

@interface TBQGWeatherTableViewCell : UITableViewCell
{
    TBQGWeatherExtendModel *_model;	// 8 = 0x8
    UIImageView *_imageViewforWeather;	// 16 = 0x10
    UILabel *_labelForWeather;	// 24 = 0x18
    UILabel *_labelForCity;	// 32 = 0x20
    NSMutableArray *_viewForGoods;	// 40 = 0x28
    UIButton *_buttonForBar;	// 48 = 0x30
    UIView *_viewForItems;	// 56 = 0x38
    UILabel *_labelForLink;	// 64 = 0x40
}

+ (id)placeholderImage;
+ (double)cellHeight;
@property(retain, nonatomic) UILabel *labelForLink; // @synthesize labelForLink=_labelForLink;
@property(retain, nonatomic) UIView *viewForItems; // @synthesize viewForItems=_viewForItems;
@property(retain, nonatomic) UIButton *buttonForBar; // @synthesize buttonForBar=_buttonForBar;
@property(retain, nonatomic) NSMutableArray *viewForGoods; // @synthesize viewForGoods=_viewForGoods;
@property(retain, nonatomic) UILabel *labelForCity; // @synthesize labelForCity=_labelForCity;
@property(retain, nonatomic) UILabel *labelForWeather; // @synthesize labelForWeather=_labelForWeather;
@property(retain, nonatomic) UIImageView *imageViewforWeather; // @synthesize imageViewforWeather=_imageViewforWeather;
@property(retain, nonatomic) TBQGWeatherExtendModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)goToLink;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
