/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, UIColor, HKFillStyle;

@interface HKDisplayCategory : NSObject {

	/*^block*/id _keyColor;
	long long _categoryID;
	NSString* _categoryName;
	NSString* _displayName;
	NSString* _largeListIconName;
	NSString* _listIconName;
	NSString* _healthDataIconName;
	NSString* _shareIconName;

}

@property (nonatomic,readonly) long long categoryID;                       //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,readonly) NSString * categoryName;                    //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * largeListIconName;               //@synthesize largeListIconName=_largeListIconName - In the implementation block
@property (nonatomic,readonly) NSString * listIconName;                    //@synthesize listIconName=_listIconName - In the implementation block
@property (nonatomic,readonly) NSString * healthDataIconName;              //@synthesize healthDataIconName=_healthDataIconName - In the implementation block
@property (nonatomic,readonly) NSString * shareIconName;                   //@synthesize shareIconName=_shareIconName - In the implementation block
@property (nonatomic,readonly) UIImage * largeListIcon; 
@property (nonatomic,readonly) UIImage * listIcon; 
@property (nonatomic,readonly) UIImage * healthDataIcon; 
@property (nonatomic,readonly) UIImage * shareIcon; 
@property (nonatomic,readonly) BOOL isMeCategory; 
@property (nonatomic,readonly) BOOL isTopLevelCategory; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) HKFillStyle * fillStyle; 
+(id)topLevelCategoryIdentifiers;
-(id)init;
-(UIColor *)color;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(UIImage *)listIcon;
-(NSString *)categoryName;
-(long long)categoryID;
-(NSString *)displayName;
-(HKFillStyle *)fillStyle;
-(UIImage *)shareIcon;
-(NSString *)listIconName;
-(UIImage *)largeListIcon;
-(UIImage *)healthDataIcon;
-(BOOL)isMeCategory;
-(BOOL)isTopLevelCategory;
-(NSString *)largeListIconName;
-(NSString *)healthDataIconName;
-(NSString *)shareIconName;
@end

