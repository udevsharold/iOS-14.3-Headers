/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, NSArray;

@interface CPRMList : NSObject {

	NSMutableArray* _items;

}

@property (readonly) NSArray * listItems;              //@synthesize items=_items - In the implementation block
@property (readonly) CGPDFPageRef page; 
-(void)addItem:(id)arg1 ;
-(CGPDFPageRef)page;
-(CGRect)bounds;
-(NSArray *)listItems;
@end
