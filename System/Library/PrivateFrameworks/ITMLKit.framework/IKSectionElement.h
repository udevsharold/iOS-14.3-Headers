/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKDataSourceElement.h>

@class NSArray, IKHeaderElement, IKViewElement;

@interface IKSectionElement : IKDataSourceElement {

	NSArray* _items;

}

@property (nonatomic,retain,readonly) IKHeaderElement * header; 
@property (nonatomic,retain,readonly) NSArray * items; 
@property (nonatomic,retain,readonly) IKViewElement * footer; 
-(IKViewElement *)footer;
-(IKHeaderElement *)header;
-(NSArray *)items;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(id)unboundItemElements;
@end
