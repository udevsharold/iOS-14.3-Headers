/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSArray;

@interface TMLDictionary : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;               //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * keys; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(NSArray *)keys;
-(id)get:(id)arg1 ;
-(id)init;
-(id)union:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(void)removeAllObjects;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(void)set:(id)arg1 value:(id)arg2 ;
@end

