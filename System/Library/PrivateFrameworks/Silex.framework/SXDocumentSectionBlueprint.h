/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXDocumentSectionBlueprint.h>
@class NSArray;


@protocol SXDocumentSectionBlueprint <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@required
-(NSArray *)items;

@end


@class NSArray, NSString;

@interface SXDocumentSectionBlueprint : NSObject <SXDocumentSectionBlueprint> {

	NSArray* _items;

}

@property (nonatomic,readonly) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)blueprintWithItems:(id)arg1 ;
-(NSArray *)items;
@end
