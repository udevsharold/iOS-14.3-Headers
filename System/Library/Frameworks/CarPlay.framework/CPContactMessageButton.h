/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CPButton.h>

@class NSString;

@interface CPContactMessageButton : CPButton {

	NSString* _phoneOrEmail;

}

@property (nonatomic,copy,readonly) NSString * phoneOrEmail;              //@synthesize phoneOrEmail=_phoneOrEmail - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phoneOrEmail;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPhoneOrEmail:(id)arg1 ;
@end

