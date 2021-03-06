/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKCGColorProvider.h>

@class TSKAnnotationAuthor, NSString;

@interface TSKAnnotationAuthorTextHighlightColorProvider : NSObject <TSKCGColorProvider> {

	TSKAnnotationAuthor* mAnnotationAuthor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGColorRef)cgColor;
-(void)dealloc;
-(id)initWithAnnotationAuthor:(id)arg1 ;
@end

