//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDUserProfile.h"

@class NSData, NSMutableArray, NSString;

@interface MDPersonalProfile : MDUserProfile
{
    _Bool _p_isBindEmail;
    _Bool _p_isAlipayBind;
    _Bool _p_needClearWebBgView;
    int _p_profileVersion;
    NSString *_p_email;
    NSString *_p_countryCode;
    NSString *_p_phoneNumber;
    NSString *_p_birthday;
    NSData *_p_bgImageData;
    NSString *_p_feedBackAuthorityGoto;
    NSMutableArray *_p_photoSummarys;
    NSMutableArray *_backupPropertyArr;
    NSString *_p_alipayAccount;
}

+ (id)propetiesMapToParams;
+ (id)personalProfileToDictionary:(id)arg1;
+ (id)dictionaryToPersonalProfile:(id)arg1;
+ (id)eta_dbStoreProperty;
+ (id)eta_valueTransform;
+ (id)eta_jsonKeyPathsByProperty;
@property(nonatomic) _Bool p_needClearWebBgView; // @synthesize p_needClearWebBgView=_p_needClearWebBgView;
@property(retain, nonatomic) NSString *p_alipayAccount; // @synthesize p_alipayAccount=_p_alipayAccount;
@property(nonatomic) _Bool p_isAlipayBind; // @synthesize p_isAlipayBind=_p_isAlipayBind;
@property(retain, nonatomic) NSMutableArray *backupPropertyArr; // @synthesize backupPropertyArr=_backupPropertyArr;
@property(retain, nonatomic) NSMutableArray *p_photoSummarys; // @synthesize p_photoSummarys=_p_photoSummarys;
@property(retain, nonatomic) NSString *p_feedBackAuthorityGoto; // @synthesize p_feedBackAuthorityGoto=_p_feedBackAuthorityGoto;
@property(retain, nonatomic) NSData *p_bgImageData; // @synthesize p_bgImageData=_p_bgImageData;
@property(retain, nonatomic) NSString *p_birthday; // @synthesize p_birthday=_p_birthday;
@property(retain, nonatomic) NSString *p_phoneNumber; // @synthesize p_phoneNumber=_p_phoneNumber;
@property(retain, nonatomic) NSString *p_countryCode; // @synthesize p_countryCode=_p_countryCode;
@property(retain, nonatomic) NSString *p_email; // @synthesize p_email=_p_email;
@property(nonatomic) _Bool p_isBindEmail; // @synthesize p_isBindEmail=_p_isBindEmail;
@property(nonatomic) int p_profileVersion; // @synthesize p_profileVersion=_p_profileVersion;
- (void).cxx_destruct;
- (_Bool)isCellFilled:(long long)arg1;
- (id)proportionDesWithCellArray:(id)arg1;
- (id)hometownCity;
- (id)hometownProvince;
- (id)hometownLevels;
- (void)addPhotoSummary:(id)arg1;
- (_Bool)hasMusicWithId:(id)arg1;
- (_Bool)hasMovieWithId:(id)arg1;
- (_Bool)hasBookWithId:(id)arg1;
- (void)deleteFavoriteWithItemList:(id)arg1 Id:(id)arg2;
- (void)deleteMusicWithId:(id)arg1;
- (void)deleteMovieWithId:(id)arg1;
- (void)deleteBookWithId:(id)arg1;
- (void)addMusicWithItem:(id)arg1;
- (void)addMovieWithItem:(id)arg1;
- (void)addBookWithItem:(id)arg1;
- (id)createdJoinedBoardList;
- (id)joinedBoardListDescription;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)diffFrom:(id)arg1 with:(id)arg2;
- (id)diffFromBackup:(id)arg1;
- (void)deepCopy:(id)arg1;
- (void)createBackupPropertyArray;
- (void)clearAudio;
- (void)removeJoinBoard:(id)arg1;
- (void)addJoinBoard:(id)arg1;
- (void)setJoinBoardListWithBoardList:(id)arg1;
- (void)updatePersonalProfileFromDictionary:(id)arg1;

@end
