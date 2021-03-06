/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSUResourceRequestObserver.h>
#import <TSPersistence/TSUResourceRequestObservable.h>

@class TSUObserverNotifier, NSString;

@interface TSPResourceRequestManager : NSObject <TSUResourceRequestObserver, TSUResourceRequestObservable> {

	TSUObserverNotifier* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)createResourceRequestForTags:(id)arg1 resourceContext:(id)arg2 ;
-(void)resourceRequestWillPerformResourceAccess:(id)arg1 ;
-(void)resourceRequestDidPerformResourceAccess:(id)arg1 error:(id)arg2 ;
-(id)createResourceRequestForDocumentResourceInfos:(id)arg1 resourceContext:(id)arg2 ;
-(long long)resourceAccessTypeForResourceRequest:(id)arg1 ;
@end

