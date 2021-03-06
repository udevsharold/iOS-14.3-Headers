/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebCore/WebEvent.h>

@class UIEvent;

@interface WKWebEvent : WebEvent {

	RetainPtr<UIEvent>* _uiEvent;

}

@property (nonatomic,retain,readonly) UIEvent * uiEvent; 
-(UIEvent *)uiEvent;
-(id)initWithEvent:(id)arg1 ;
@end

