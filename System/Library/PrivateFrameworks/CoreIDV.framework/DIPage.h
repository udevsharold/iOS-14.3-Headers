/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDictionary;

@interface DIPage : NSObject <NSSecureCoding> {

	NSArray* _attributes;
	unsigned long long _page;
	NSString* _title;
	NSString* _subTitle;
	NSDictionary* _serverValidationGroup;

}

@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subTitle;                               //@synthesize subTitle=_subTitle - In the implementation block
@property (nonatomic,copy) NSDictionary * serverValidationGroup;              //@synthesize serverValidationGroup=_serverValidationGroup - In the implementation block
@property (nonatomic,copy) NSArray * attributes;                              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) unsigned long long page;                         //@synthesize page=_page - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)page;
-(void)setPage:(unsigned long long)arg1 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(NSString *)subTitle;
-(void)setSubTitle:(NSString *)arg1 ;
-(NSArray *)attributes;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 title:(id)arg2 subTitle:(id)arg3 page:(long long)arg4 ;
-(NSDictionary *)serverValidationGroup;
-(void)setServerValidationGroup:(NSDictionary *)arg1 ;
@end

