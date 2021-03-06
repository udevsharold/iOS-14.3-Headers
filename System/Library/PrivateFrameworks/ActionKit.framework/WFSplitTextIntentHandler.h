/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFSplitTextIntentHandling.h>

@class NSString;

@interface WFSplitTextIntentHandler : NSObject <WFSplitTextIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSplitText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTextForSplitText:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveSeparatorForSplitText:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveCustomSeparatorForSplitText:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

