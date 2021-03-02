/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class MFPGraphicsState;

@interface MFPGraphicsContainer : NSObject {

	MFPGraphicsState* mParentGraphicsState;
	CGAffineTransform mContainerTransform;

}
-(id)initWithParentGraphicsState:(id)arg1 containerTransform:(CGAffineTransform)arg2 ;
-(id)parentGraphicsState;
-(CGAffineTransform)containerTransform;
@end
