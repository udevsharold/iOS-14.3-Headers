/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _PASLock;

@interface PSGInputSuggestionsExplanationSet : NSObject <NSSecureCoding, NSCopying> {

	_PASLock* _lock;

}
+(BOOL)supportsSecureCoding;
+(id)stringFromExplanationCode:(unsigned)arg1 ;
+(id)_stringFromExplanation:(unsigned char)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithSet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)enumerateExplanationCodeWithBlock:(/*^block*/id)arg1 ;
-(void)_pushExplanationCode:(unsigned short)arg1 namespaceId:(unsigned short)arg2 ;
-(void)pushInternalExplanationCode:(unsigned)arg1 ;
-(void)pushPortraitExplanationCode:(unsigned char)arg1 ;
-(BOOL)hasPETLoggingData;
-(BOOL)hasContactsServingError;
-(BOOL)hasTriggeringXPCTimeout;
-(BOOL)isEqualToExplanationSet:(id)arg1 ;
@end

