/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray, NSArray;

@interface MapsSuggestionsMutableWeakEntries : NSObject {

	NSPointerArray* _array;
	BOOL _dirty;

}

@property (nonatomic,readonly) NSArray * strongArray; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(NSArray *)strongArray;
-(id)initWithEntries:(id)arg1 ;
-(unsigned long long)count;
-(void)addWeakObject:(id)arg1 ;
@end
