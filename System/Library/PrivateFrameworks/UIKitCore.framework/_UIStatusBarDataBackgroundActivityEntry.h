/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataBackgroundActivityEntry : _UIStatusBarDataEntry {

	long long _type;
	double _displayStartDate;
	NSString* _detailString;

}

@property (assign,nonatomic) long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double displayStartDate;              //@synthesize displayStartDate=_displayStartDate - In the implementation block
@property (nonatomic,copy) NSString * detailString;                //@synthesize detailString=_detailString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)displayStartDate;
-(void)setType:(long long)arg1 ;
-(void)setDisplayStartDate:(double)arg1 ;
-(id)_ui_descriptionBuilder;
-(void)setDetailString:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)detailString;
-(void)encodeWithCoder:(id)arg1 ;
@end

