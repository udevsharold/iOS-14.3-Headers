/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/ATXScoreLogSerializable.h>

@class NSSet, NSString;

@interface ATXScoreDict : NSObject <ATXScoreLogSerializable> {

	CFDictionaryRef _dict;
	NSSet* _defaultKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long count; 
+(id)scoreDictFromDictionary:(id)arg1 ;
-(void)atx_writeToFile:(_sFILE*)arg1 ;
-(id)init;
-(id)initWithDefaultValueForScoreTypeKeys;
-(void)dealloc;
-(NSString *)description;
-(id)toDictionary;
-(double)scoreForKey:(id)arg1 found:(BOOL*)arg2 ;
-(void)getKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(id)initWithDefaultValueForKeys:(id)arg1 ;
-(void)setScore:(double)arg1 forKey:(id)arg2 ;
@end

