/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURL;

@interface _NSHSTSStorage : NSObject {

	CFHSTSPolicyRef _policy;

}

@property (readonly) CFHSTSPolicyRef _policyRef; 
@property (nonatomic,readonly) NSURL * path; 
+(id)sharedPersistentStore;
-(CFHSTSPolicyRef)_policyRef;
-(id)nonPreloadedHosts;
-(void)resetHSTSForHost:(id)arg1 ;
-(void)resetHSTSHostsSinceDate:(id)arg1 ;
-(NSURL *)path;
-(BOOL)shouldPromoteHostToHTTPS:(id)arg1 ;
-(void)dealloc;
-(id)initPersistentStoreWithURL:(id)arg1 ;
-(id)initInMemoryStore;
@end
