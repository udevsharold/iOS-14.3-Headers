/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCharacterSet;

@interface CXCallDirectorySanitizer : NSObject {

	NSCharacterSet* _phoneNumbersCharacterSet;
	NSCharacterSet* _nonPhoneNumbersCharacterSet;
	NSCharacterSet* _phoneNumbersIgnoredCharacterSet;

}

@property (nonatomic,readonly) NSCharacterSet * phoneNumbersCharacterSet;                     //@synthesize phoneNumbersCharacterSet=_phoneNumbersCharacterSet - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * nonPhoneNumbersCharacterSet;                  //@synthesize nonPhoneNumbersCharacterSet=_nonPhoneNumbersCharacterSet - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * phoneNumbersIgnoredCharacterSet;              //@synthesize phoneNumbersIgnoredCharacterSet=_phoneNumbersIgnoredCharacterSet - In the implementation block
-(id)init;
-(NSCharacterSet *)phoneNumbersIgnoredCharacterSet;
-(NSCharacterSet *)phoneNumbersCharacterSet;
-(NSCharacterSet *)nonPhoneNumbersCharacterSet;
-(id)canonicalizedPhoneNumber:(id)arg1 ;
@end

