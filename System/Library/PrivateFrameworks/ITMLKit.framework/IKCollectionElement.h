/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKAppBrowserBridge, IKHeaderElement;

@interface IKCollectionElement : IKViewElement {

	NSArray* _sections;
	IKAppBrowserBridge* _browserBridge;

}

@property (nonatomic,retain,readonly) IKHeaderElement * header; 
@property (nonatomic,retain,readonly) NSArray * sections; 
@property (nonatomic,readonly) IKAppBrowserBridge * browserBridge;              //@synthesize browserBridge=_browserBridge - In the implementation block
+(id)supportedFeaturesForElementName:(id)arg1 ;
-(IKHeaderElement *)header;
-(NSArray *)sections;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(IKAppBrowserBridge *)browserBridge;
@end
