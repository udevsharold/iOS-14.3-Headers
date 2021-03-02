/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@class RWIProtocolConfiguration;

@interface RWIProtocolInspector : NSObject {

	AugmentableInspectorController* _inspectorController;
	RetainPtr<RWIProtocolConfiguration>* _configuration;
	unique_ptr<RWIAugmentableInspectorControllerClient, std::__1::default_delete<RWIAugmentableInspectorControllerClient> >* _inspectorControllerClient;

}

@property (nonatomic,readonly) RWIProtocolConfiguration * configuration; 
@property (nonatomic,readonly) BOOL connected; 
-(void)dealloc;
-(RWIProtocolConfiguration *)configuration;
-(BOOL)connected;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)inspectorControllerDestroyed;
@end
