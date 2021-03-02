/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>

@class NSString, NSDictionary;

@interface CSLocalizedString : NSString <CSCoderEncoder> {

	BOOL _didTrySettingDefaultString;
	NSString* _defaultString;
	NSDictionary* _localizedStrings;

}

@property (nonatomic,readonly) NSString * defaultString;                     //@synthesize defaultString=_defaultString - In the implementation block
@property (assign,nonatomic) BOOL didTrySettingDefaultString;                //@synthesize didTrySettingDefaultString=_didTrySettingDefaultString - In the implementation block
@property (nonatomic,readonly) NSDictionary * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)defaultString;
-(unsigned long long)length;
-(id)initWithLocalizedStrings:(id)arg1 ;
-(id)localizedString;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)localizedStrings;
-(BOOL)didTrySettingDefaultString;
-(void)setDidTrySettingDefaultString:(BOOL)arg1 ;
-(void)encodeWithCSCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
