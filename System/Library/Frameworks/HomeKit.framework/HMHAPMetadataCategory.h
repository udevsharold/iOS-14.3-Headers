/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface HMHAPMetadataCategory : NSObject {

	NSNumber* _categoryNumber;
	NSString* _categoryType;
	NSString* _categoryDescription;

}

@property (nonatomic,retain) NSNumber * categoryNumber;                   //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (nonatomic,retain) NSString * categoryType;                     //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,retain) NSString * categoryDescription;              //@synthesize categoryDescription=_categoryDescription - In the implementation block
-(void)setCategoryNumber:(NSNumber *)arg1 ;
-(void)setCategoryType:(NSString *)arg1 ;
-(void)setCategoryDescription:(NSString *)arg1 ;
-(NSString *)categoryDescription;
-(NSString *)categoryType;
-(NSNumber *)categoryNumber;
@end

