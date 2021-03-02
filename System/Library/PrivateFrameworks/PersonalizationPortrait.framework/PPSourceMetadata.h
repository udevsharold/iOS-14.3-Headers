/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface PPSourceMetadata : _PASZonedObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	unsigned char _flags;
	unsigned short _donationCount;
	unsigned short _contactHandleCount;
	unsigned _dwellTimeSeconds;
	unsigned _lengthSeconds;
	unsigned _lengthCharacters;

}

@property (nonatomic,readonly) unsigned dwellTimeSeconds;                      //@synthesize dwellTimeSeconds=_dwellTimeSeconds - In the implementation block
@property (nonatomic,readonly) unsigned lengthSeconds;                         //@synthesize lengthSeconds=_lengthSeconds - In the implementation block
@property (nonatomic,readonly) unsigned lengthCharacters;                      //@synthesize lengthCharacters=_lengthCharacters - In the implementation block
@property (nonatomic,readonly) unsigned short donationCount;                   //@synthesize donationCount=_donationCount - In the implementation block
@property (nonatomic,readonly) unsigned short contactHandleCount;              //@synthesize contactHandleCount=_contactHandleCount - In the implementation block
@property (nonatomic,readonly) unsigned char flags;                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
-(unsigned)dwellTimeSeconds;
-(id)init;
-(unsigned)lengthSeconds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(BOOL)isEqualToSourceMetadata:(id)arg1 ;
-(unsigned short)contactHandleCount;
-(id)initWithDwellTimeSeconds:(unsigned)arg1 lengthSeconds:(unsigned)arg2 lengthCharacters:(unsigned)arg3 donationCount:(unsigned short)arg4 contactHandleCount:(unsigned short)arg5 flags:(unsigned char)arg6 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)lengthCharacters;
-(id)initWithFlags:(unsigned char)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)flags;
-(unsigned short)donationCount;
-(void)encodeWithCoder:(id)arg1 ;
@end
