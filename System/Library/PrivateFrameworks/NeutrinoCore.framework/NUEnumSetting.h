/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSetting.h>

@class NSArray, NSString;

@interface NUEnumSetting : NUSetting {

	NSArray* _values;

}

@property (readonly) NSArray * values;                      //@synthesize values=_values - In the implementation block
@property (readonly) NSString * defaultValue; 
@property (readonly) NSString * identityValue; 
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(NSArray *)values;
-(id)init;
-(NSString *)defaultValue;
-(id)initWithAttributes:(id)arg1 ;
-(BOOL)isValid:(out id*)arg1 ;
-(id)description;
-(NSString *)identityValue;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)initWithValues:(id)arg1 attributes:(id)arg2 ;
-(BOOL)validateValues:(out id*)arg1 ;
@end
