/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class NSMutableDictionary, NSObject;

@interface _LSCanOpenURLManager : NSObject {

	NSMutableDictionary* _canOpenURLsMap;
	NSObject*<OS_dispatch_queue> _canOpenURLsMapQueue;
	int _saveFlag;

}
+(id)queryForApplicationsAvailableForOpeningURL:(id)arg1 ;
+(BindingEvaluator*)bindingEvaluatorForScheme:(id)arg1 ;
+(id)sharedManager;
-(BOOL)internalCanOpenURL:(id)arg1 publicSchemes:(BOOL)arg2 privateSchemes:(BOOL)arg3 XPCConnection:(id)arg4 error:(id*)arg5 ;
-(BOOL)legacy_isBundleID:(unsigned)arg1 bundleData:(const LSBundleData*)arg2 context:(LSContext*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5 ;
-(BOOL)canOpenURL:(id)arg1 publicSchemes:(BOOL)arg2 privateSchemes:(BOOL)arg3 XPCConnection:(id)arg4 error:(id*)arg5 ;
-(void)writeSchemesMap;
-(id)copySchemesMap;
-(BOOL)findApplicationBundleID:(unsigned*)arg1 bundleData:(const LSBundleData*)arg2 context:(LSContext*)arg3 forXPCConnection:(id)arg4 ;
-(BOOL)isXPCConnection:(id)arg1 allowedToCheckScheme:(id)arg2 error:(id*)arg3 ;
-(BOOL)isBundleID:(unsigned)arg1 bundleData:(const LSBundleData*)arg2 context:(LSContext*)arg3 allowedToCheckScheme:(id)arg4 error:(id*)arg5 ;
-(void)resetSchemeQueryLimitForApplicationWithIdentifier:(id)arg1 ;
-(void)getIsURL:(id)arg1 alwaysCheckable:(BOOL*)arg2 hasHandler:(BOOL*)arg3 ;
-(long long)schemeTypeOfScheme:(id)arg1 ;
-(id)init;
@end

