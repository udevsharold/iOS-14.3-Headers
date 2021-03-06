/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CPInformationItem : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _detail;

}

@property (nonatomic,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * detail;              //@synthesize detail=_detail - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)detail;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detail:(id)arg2 ;
@end

