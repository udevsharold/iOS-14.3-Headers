/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/AccessibilityBundles/AXActionSheetUIServer.axuiservice/AXActionSheetUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXUIService <NSObject>
@optional
+(id)sharedInstance;
+(id)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned long long)arg1;
+(id)possibleRequiredEntitlementsForProcessingMessageWithIdentifier:(unsigned long long)arg1;
-(BOOL)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned long long)arg1;
-(void)processMessageAsynchronously:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(id)accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg1;
-(BOOL)messageWithIdentifierRequiresWritingBlock:(unsigned long long)arg1;
-(void)processInitializationMessage:(id)arg1;
-(void)serviceWasFullyInitialized;
-(void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1;

@required
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4;

@end
