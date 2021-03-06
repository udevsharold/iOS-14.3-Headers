/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface TSUMutableWarningSet : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _warnings;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)initWithSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)addWarning:(id)arg1 ;
-(id)warningsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)containsWarningPassingTest:(/*^block*/id)arg1 ;
-(id)popAllWarnings;
-(id)popAllWarningsIfContainsWarningPassingTest:(/*^block*/id)arg1 ;
-(id)warningsOfKind:(long long)arg1 ;
-(BOOL)hasWarningsOfKind:(long long)arg1 ;
@end

