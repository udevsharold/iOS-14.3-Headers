/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSVoiceTriggerRTModel;

@interface UARPHeySiriModel : NSObject {

	CSVoiceTriggerRTModel* _newModel;
	CSVoiceTriggerRTModel* _fallbackModel;

}
-(id)expandToPayload:(id)arg1 error:(id*)arg2 ;
-(id)initWithHeySiriModel:(id)arg1 fallbackModel:(id)arg2 ;
-(id)expandToSuperBinary:(id*)arg1 ;
@end

