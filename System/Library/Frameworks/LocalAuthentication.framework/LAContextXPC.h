/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAContextXPC <LAContextExternalizationProt,LAContextPropertiesProt,LAContextClientEvaluationProt,LAContextEventFeedbackProt>
@required
-(void)tokenForTransferToUnknownProcess:(/*^block*/id)arg1;
-(void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(/*^block*/id)arg3;

@end
