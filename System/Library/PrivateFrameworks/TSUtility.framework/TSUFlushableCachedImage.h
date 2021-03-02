/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUFlushableObject.h>

@interface TSUFlushableCachedImage : TSUFlushableObject {

	CGImageRef _image;
	id _delegate;
	SEL _delegateCreateImageSelector;

}
-(void)unload;
-(void)dealloc;
-(CGImageRef)newImage;
-(id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2 ;
-(BOOL)hasFlushableContent;
@end
