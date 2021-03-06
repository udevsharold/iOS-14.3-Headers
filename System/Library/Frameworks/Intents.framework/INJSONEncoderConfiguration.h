/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INJSONEncoderConfiguration : NSObject <NSCopying> {

	BOOL _locationIncludesTimestamp;
	NSString* _languageCode;

}

@property (nonatomic,copy) NSString * languageCode;                       //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL locationIncludesTimestamp;              //@synthesize locationIncludesTimestamp=_locationIncludesTimestamp - In the implementation block
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)languageCode;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)locationIncludesTimestamp;
-(void)setLocationIncludesTimestamp:(BOOL)arg1 ;
@end

