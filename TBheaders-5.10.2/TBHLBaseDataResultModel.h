//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSString;
@protocol TBHLEditMenuBaseModel;

@interface TBHLBaseDataResultModel : TBJSONModel
{
    NSMutableArray<TBHLEditMenuBaseModel> *_menuList;	// 8 = 0x8
    NSString *_subscribeUrl;	// 16 = 0x10
    NSString *_findUrl;	// 24 = 0x18
    NSString *_hotUrl;	// 32 = 0x20
}

+ (id)modelKeyMapper;
@property(copy, nonatomic) NSString *hotUrl; // @synthesize hotUrl=_hotUrl;
@property(copy, nonatomic) NSString *findUrl; // @synthesize findUrl=_findUrl;
@property(copy, nonatomic) NSString *subscribeUrl; // @synthesize subscribeUrl=_subscribeUrl;
@property(retain, nonatomic) NSMutableArray<TBHLEditMenuBaseModel> *menuList; // @synthesize menuList=_menuList;
- (void).cxx_destruct;

@end
