/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INJSONEncoderConfiguration, NSString;

@interface INJSONEncoder : NSObject <NSCopying> {

	INJSONEncoderConfiguration* _configuration;

}

@property (nonatomic,readonly) INJSONEncoderConfiguration * _storedConfiguration; 
@property (nonatomic,copy,readonly) INJSONEncoderConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * languageCode; 
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodeObject:(id)arg1 ;
-(NSString *)languageCode;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INJSONEncoderConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(id)encodeObject:(id)arg1 withCodableDescription:(id)arg2 ;
-(id)encodeObject:(id)arg1 withCodableAttribute:(id)arg2 ;
-(id)_encodeObject:(id)arg1 codableAttribute:(id)arg2 ;
-(INJSONEncoderConfiguration *)_storedConfiguration;
@end

