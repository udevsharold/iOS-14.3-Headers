/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextPosition.h>

@class PDFPage;

@interface PDFTextPosition : UITextPosition {

	PDFPage* _page;
	long long _offset;

}
-(id)page;
-(long long)offset;
-(id)initWithOffset:(long long)arg1 onPage:(id)arg2 ;
-(id)description;
@end

