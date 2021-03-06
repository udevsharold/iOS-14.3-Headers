/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class NSPredicate;

@interface LSEnumerator : NSEnumerator {

	/*^block*/id _filter;
	atomic_flag _hasFiredErrorHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy) id errorHandler;                      //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate; 
@property (nonatomic,copy) id filter; 
+(void)initialize;
+(id)new;
+(id)enumeratorForApplicationProxiesWithOptions:(unsigned long long)arg1 ;
+(id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 filter:(/*^block*/id)arg3 ;
+(id)enumeratorForPlugInKitProxiesWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_fireErrorHandlerWithError:(id)arg1 ;
-(id)_initWithContext:(LSContext*)arg1 ;
-(id)nextObject;
-(id)init;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(NSPredicate *)predicate;
-(id)errorHandler;
@end

