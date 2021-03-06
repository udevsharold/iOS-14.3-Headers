/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface AFDisambiguationEvent : NSObject <NSSecureCoding> {

	NSString* _itemIdentifier;
	long long _selectionType;
	NSDate* _date;

}

@property (nonatomic,copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long selectionType;              //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,retain) NSDate * date;                        //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)itemIdentifier;
-(void)setSelectionType:(long long)arg1 ;
-(NSDate *)date;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setDate:(NSDate *)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(long long)selectionType;
-(void)encodeWithCoder:(id)arg1 ;
@end

