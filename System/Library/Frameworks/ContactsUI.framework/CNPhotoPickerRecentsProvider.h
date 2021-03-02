/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerProvider.h>

@class NSString, CNVisualIdentity;

@interface CNPhotoPickerRecentsProvider : NSObject <CNPhotoPickerProvider> {

	BOOL _containsContactImage;
	BOOL _containsMonogram;
	NSString* identifier;
	CNVisualIdentity* _visualIdentity;

}

@property (nonatomic,readonly) CNVisualIdentity * visualIdentity;              //@synthesize visualIdentity=_visualIdentity - In the implementation block
@property (assign,nonatomic) BOOL containsContactImage;                        //@synthesize containsContactImage=_containsContactImage - In the implementation block
@property (assign,nonatomic) BOOL containsMonogram;                            //@synthesize containsMonogram=_containsMonogram - In the implementation block
@property (nonatomic,retain) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVisualIdentity:(id)arg1 ;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)containsContactImage;
-(BOOL)containsMonogram;
-(id)providerItemForContactImage:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 RTL:(BOOL)arg4 renderingQueue:(id)arg5 callbackQueue:(id)arg6 ;
-(void)setContainsContactImage:(BOOL)arg1 ;
-(void)setContainsMonogram:(BOOL)arg1 ;
-(CNVisualIdentity *)visualIdentity;
@end
