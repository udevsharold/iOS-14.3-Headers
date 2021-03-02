/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolCSSDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)safe_mediaQueryResultChanged;
-(void)safe_styleSheetChangedWithStyleSheetId:(id)arg1 ;
-(void)safe_styleSheetAddedWithHeader:(id)arg1 ;
-(void)safe_styleSheetRemovedWithStyleSheetId:(id)arg1 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)mediaQueryResultChanged;
-(void)styleSheetChangedWithStyleSheetId:(id)arg1 ;
-(void)styleSheetAddedWithHeader:(id)arg1 ;
-(void)styleSheetRemovedWithStyleSheetId:(id)arg1 ;
@end
