/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AUPasscodeCodecCommandLineOption : NSObject {

	NSString* _optionSyntax;
	NSString* _optionDescription;

}

@property (nonatomic,readonly) NSString * optionSyntax;                   //@synthesize optionSyntax=_optionSyntax - In the implementation block
@property (nonatomic,readonly) NSString * optionDescription;              //@synthesize optionDescription=_optionDescription - In the implementation block
+(id)optionWithSyntax:(id)arg1 description:(id)arg2 ;
-(NSString *)optionDescription;
-(id)initWithSyntax:(id)arg1 description:(id)arg2 ;
-(NSString *)optionSyntax;
@end

