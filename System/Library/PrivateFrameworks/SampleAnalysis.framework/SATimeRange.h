/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SATimestamp, NSString;

@interface SATimeRange : NSObject <SAJSONSerialization, SASerializable, NSCopying> {

	SATimestamp* _startTime;
	SATimestamp* _endTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SATimestamp * startTime; 
@property (readonly) SATimestamp * endTime; 
@property (readonly) unsigned long long deltaMachAbsTime; 
@property (readonly) double deltaMachAbsTimeSeconds; 
@property (readonly) unsigned long long deltaMachContTime; 
@property (readonly) double deltaMachContTimeSeconds; 
@property (readonly) double deltaWallTime; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)timeRangeStart:(id)arg1 end:(id)arg2 ;
-(SATimestamp *)endTime;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SATimestamp *)startTime;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA23*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)deltaMachAbsTime;
-(double)deltaMachAbsTimeSeconds;
-(unsigned long long)deltaMachContTime;
-(double)deltaMachContTimeSeconds;
-(double)deltaWallTime;
@end
