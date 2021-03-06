/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_LSQueryResolving.h>

@class _LSLocalQueryResolver, NSString;

@interface _LSXPCQueryResolver : NSObject <_LSQueryResolving> {

	_LSLocalQueryResolver* _localResolver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)resolveWhatWeCanLocallyWithQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
-(void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(/*^block*/id)arg3 ;
@end

