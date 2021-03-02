/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class _PASLock, NSDictionary, NSSet;

@interface PPNamedEntityCustomTagger : NSObject {

	_PASLock* _lock;
	NSDictionary* _categoryMapping;
	NSSet* _dynamicCategories;

}
+(id)sharedInstance;
-(void*)_loadTaggerWithDynamicCategories:(id)arg1 filePath:(id)arg2 trialWrapper:(id)arg3 ;
-(id)init;
-(id)initWithFilePath:(id)arg1 dynamicCategories:(id)arg2 trialWrapper:(id)arg3 ;
-(void)dealloc;
-(void)enumerateNamedEntitiesInText:(id)arg1 addNamedEntity:(/*^block*/id)arg2 ;
-(void)enumerateNamedEntitiesInText:(id)arg1 range:(NSRange)arg2 addNamedEntity:(/*^block*/id)arg3 ;
@end
