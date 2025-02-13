
{=============================================}
{@! ___SCANECODE TABLE___ } 
{=============================================}

const
  GLPT_KEY_UNKNOWN = 0;
var 
  darwin_scancode_table: array[0..127] of GLPT_Scancode = (
    {   0 }   GLPT_SCANCODE_A,
    {   1 }   GLPT_SCANCODE_S,
    {   2 }   GLPT_SCANCODE_D,
    {   3 }   GLPT_SCANCODE_F,
    {   4 }   GLPT_SCANCODE_H,
    {   5 }   GLPT_SCANCODE_G,
    {   6 }   GLPT_SCANCODE_Z,
    {   7 }   GLPT_SCANCODE_X,
    {   8 }   GLPT_SCANCODE_C,
    {   9 }   GLPT_SCANCODE_V,
    {  10 }   GLPT_SCANCODE_NONUSBACKSLASH, { GLPT_SCANCODE_NONUSBACKSLASH on ANSI and JIS keyboards (if this key would exist there), GLPT_SCANCODE_GRAVE on ISO. (The USB keyboard driver actually translates these usage codes to different virtual key codes depending on whether the keyboard is ISO/ANSI/JIS. That's why you have to help it identify the keyboard type when you plug in a PC USB keyboard. It's a historical thing - ADB keyboards are wired this way.) }
    {  11 }   GLPT_SCANCODE_B,
    {  12 }   GLPT_SCANCODE_Q,
    {  13 }   GLPT_SCANCODE_W,
    {  14 }   GLPT_SCANCODE_E,
    {  15 }   GLPT_SCANCODE_R,
    {  16 }   GLPT_SCANCODE_Y,
    {  17 }   GLPT_SCANCODE_T,
    {  18 }   GLPT_SCANCODE_1,
    {  19 }   GLPT_SCANCODE_2,
    {  20 }   GLPT_SCANCODE_3,
    {  21 }   GLPT_SCANCODE_4,
    {  22 }   GLPT_SCANCODE_6,
    {  23 }   GLPT_SCANCODE_5,
    {  24 }   GLPT_SCANCODE_EQUALS,
    {  25 }   GLPT_SCANCODE_9,
    {  26 }   GLPT_SCANCODE_7,
    {  27 }   GLPT_SCANCODE_MINUS,
    {  28 }   GLPT_SCANCODE_8,
    {  29 }   GLPT_SCANCODE_0,
    {  30 }   GLPT_SCANCODE_RIGHTBRACKET,
    {  31 }   GLPT_SCANCODE_O,
    {  32 }   GLPT_SCANCODE_U,
    {  33 }   GLPT_SCANCODE_LEFTBRACKET,
    {  34 }   GLPT_SCANCODE_I,
    {  35 }   GLPT_SCANCODE_P,
    {  36 }   GLPT_SCANCODE_RETURN,
    {  37 }   GLPT_SCANCODE_L,
    {  38 }   GLPT_SCANCODE_J,
    {  39 }   GLPT_SCANCODE_APOSTROPHE,
    {  40 }   GLPT_SCANCODE_K,
    {  41 }   GLPT_SCANCODE_SEMICOLON,
    {  42 }   GLPT_SCANCODE_BACKSLASH,
    {  43 }   GLPT_SCANCODE_COMMA,
    {  44 }   GLPT_SCANCODE_SLASH,
    {  45 }   GLPT_SCANCODE_N,
    {  46 }   GLPT_SCANCODE_M,
    {  47 }   GLPT_SCANCODE_PERIOD,
    {  48 }   GLPT_SCANCODE_TAB,
    {  49 }   GLPT_SCANCODE_SPACE,
    {  50 }   GLPT_SCANCODE_GRAVE, { GLPT_SCANCODE_GRAVE on ANSI and JIS keyboards, GLPT_SCANCODE_NONUSBACKSLASH on ISO (see comment about virtual key code 10 above) }
    {  51 }   GLPT_SCANCODE_BACKSPACE,
    {  52 }   GLPT_SCANCODE_KP_ENTER, { keyboard enter on portables }
    {  53 }   GLPT_SCANCODE_ESCAPE,
    {  54 }   GLPT_SCANCODE_RGUI,
    {  55 }   GLPT_SCANCODE_LGUI,
    {  56 }   GLPT_SCANCODE_LSHIFT,
    {  57 }   GLPT_SCANCODE_CAPSLOCK,
    {  58 }   GLPT_SCANCODE_LALT,
    {  59 }   GLPT_SCANCODE_LCTRL,
    {  60 }   GLPT_SCANCODE_RSHIFT,
    {  61 }   GLPT_SCANCODE_RALT,
    {  62 }   GLPT_SCANCODE_RCTRL,
    {  63 }   GLPT_SCANCODE_RGUI, { fn on portables, acts as a hardware-level modifier already, so we don't generate events for it, also XK_Meta_R }
    {  64 }   GLPT_SCANCODE_F17,
    {  65 }   GLPT_SCANCODE_KP_PERIOD,
    {  66 }   GLPT_SCANCODE_UNKNOWN, { unknown (unused?) }
    {  67 }   GLPT_SCANCODE_KP_MULTIPLY,
    {  68 }   GLPT_SCANCODE_UNKNOWN, { unknown (unused?) }
    {  69 }   GLPT_SCANCODE_KP_PLUS,
    {  70 }   GLPT_SCANCODE_UNKNOWN, { unknown (unused?) }
    {  71 }   GLPT_SCANCODE_NUMLOCKCLEAR,
    {  72 }   GLPT_SCANCODE_VOLUMEUP,
    {  73 }   GLPT_SCANCODE_VOLUMEDOWN,
    {  74 }   GLPT_SCANCODE_MUTE,
    {  75 }   GLPT_SCANCODE_KP_DIVIDE,
    {  76 }   GLPT_SCANCODE_KP_ENTER, { keypad enter on external keyboards, fn-return on portables }
    {  77 }   GLPT_SCANCODE_UNKNOWN, { unknown (unused?) }
    {  78 }   GLPT_SCANCODE_KP_MINUS,
    {  79 }   GLPT_SCANCODE_F18,
    {  80 }   GLPT_SCANCODE_F19,
    {  81 }   GLPT_SCANCODE_KP_EQUALS,
    {  82 }   GLPT_SCANCODE_KP_0,
    {  83 }   GLPT_SCANCODE_KP_1,
    {  84 }   GLPT_SCANCODE_KP_2,
    {  85 }   GLPT_SCANCODE_KP_3,
    {  86 }   GLPT_SCANCODE_KP_4,
    {  87 }   GLPT_SCANCODE_KP_5,
    {  88 }   GLPT_SCANCODE_KP_6,
    {  89 }   GLPT_SCANCODE_KP_7,
    {  90 }   GLPT_SCANCODE_UNKNOWN, { unknown (unused?) }
    {  91 }   GLPT_SCANCODE_KP_8,
    {  92 }   GLPT_SCANCODE_KP_9,
    {  93 }   GLPT_SCANCODE_INTERNATIONAL3, { Cosmo_USB2ADB.c says "Yen (JIS)" }
    {  94 }   GLPT_SCANCODE_INTERNATIONAL1, { Cosmo_USB2ADB.c says "Ro (JIS)" }
    {  95 }   GLPT_SCANCODE_KP_COMMA, { Cosmo_USB2ADB.c says ", JIS only" }
    {  96 }   GLPT_SCANCODE_F5,
    {  97 }   GLPT_SCANCODE_F6,
    {  98 }   GLPT_SCANCODE_F7,
    {  99 }   GLPT_SCANCODE_F3,
    { 100 }   GLPT_SCANCODE_F8,
    { 101 }   GLPT_SCANCODE_F9,
    { 102 }   GLPT_SCANCODE_LANG2, { Cosmo_USB2ADB.c says "Eisu" }
    { 103 }   GLPT_SCANCODE_F11,
    { 104 }   GLPT_SCANCODE_LANG1, { Cosmo_USB2ADB.c says "Kana" }
    { 105 }   GLPT_SCANCODE_PRINTSCREEN, { On ADB keyboards, this key is labeled "F13/print screen". Problem: USB has different usage codes for these two functions. On Apple USB keyboards, the key is labeled "F13" and sends the F13 usage code (GLPT_SCANCODE_F13). I decided to use GLPT_SCANCODE_PRINTSCREEN here nevertheless since SDL applications are more likely to assume the presence of a print screen key than an F13 key. }
    { 106 }   GLPT_SCANCODE_F16,
    { 107 }   GLPT_SCANCODE_SCROLLLOCK, { F14/scroll lock, see comment about F13/print screen above }
    { 108 }   GLPT_SCANCODE_UNKNOWN, { unknown (unused?) }
    { 109 }   GLPT_SCANCODE_F10,
    { 110 }   GLPT_SCANCODE_APPLICATION, { windows contextual menu key, fn-enter on portables }
    { 111 }   GLPT_SCANCODE_F12,
    { 112 }   GLPT_SCANCODE_UNKNOWN, { unknown (unused?) }
    { 113 }   GLPT_SCANCODE_PAUSE, { F15/pause, see comment about F13/print screen above }
    { 114 }   GLPT_SCANCODE_INSERT, { the key is actually labeled "help" on Apple keyboards, and works as such in Mac OS, but it sends the "insert" usage code even on Apple USB keyboards }
    { 115 }   GLPT_SCANCODE_HOME,
    { 116 }   GLPT_SCANCODE_PAGEUP,
    { 117 }   GLPT_SCANCODE_DELETE,
    { 118 }   GLPT_SCANCODE_F4,
    { 119 }   GLPT_SCANCODE_END,
    { 120 }   GLPT_SCANCODE_F2,
    { 121 }   GLPT_SCANCODE_PAGEDOWN,
    { 122 }   GLPT_SCANCODE_F1,
    { 123 }   GLPT_SCANCODE_LEFT,
    { 124 }   GLPT_SCANCODE_RIGHT,
    { 125 }   GLPT_SCANCODE_DOWN,
    { 126 }   GLPT_SCANCODE_UP,
    { 127 }   GLPT_SCANCODE_POWER
);

// SDL_cocoakeyboard.m 

(*

static void
UpdateKeymap(SDL_VideoData *data, SDL_bool send_event)
{
    TISInputSourceRef key_layout;
    const void *chr_data;
    int i;
    SDL_Scancode scancode;
    SDL_Keycode keymap[SDL_NUM_SCANCODES];

    /* See if the keymap needs to be updated */
    key_layout = TISCopyCurrentKeyboardLayoutInputSource();
    if (key_layout == data->key_layout) {
        return;
    }
    data->key_layout = key_layout;

    SDL_GetDefaultKeymap(keymap);

    /* Try Unicode data first */
    CFDataRef uchrDataRef = TISGetInputSourceProperty(key_layout, kTISPropertyUnicodeKeyLayoutData);
    if (uchrDataRef) {
        chr_data = CFDataGetBytePtr(uchrDataRef);
    } else {
        goto cleanup;
    }

    if (chr_data) {
        UInt32 keyboard_type = LMGetKbdType();
        OSStatus err;

        for (i = 0; i < SDL_arraysize(darwin_scancode_table); i++) {
            UniChar s[8];
            UniCharCount len;
            UInt32 dead_key_state;

            /* Make sure this scancode is a valid character scancode */
            scancode = darwin_scancode_table[i];
            if (scancode == SDL_SCANCODE_UNKNOWN ||
                (keymap[scancode] & SDLK_SCANCODE_MASK)) {
                continue;
            }

            dead_key_state = 0;
            err = UCKeyTranslate ((UCKeyboardLayout ) chr_data,
                                  i, kUCKeyActionDown,
                                  0, keyboard_type,
                                  kUCKeyTranslateNoDeadKeysMask,
                                  &dead_key_state, 8, &len, s);
            if (err != noErr) {
                continue;
            }

            if (len > 0 && s[0] != 0x10) {
                keymap[scancode] = s[0];
            }
        }
        SDL_SetKeymap(0, keymap, SDL_NUM_SCANCODES);
        if (send_event) {
            SDL_SendKeymapChangedEvent();
        }
        return;
    }

cleanup:
    CFRelease(key_layout);
}

*)

{=============================================}
{@! ___COCOA UTILS___ } 
{=============================================}
type
  NSFileManager_Additions = objccategory external (NSFileManager)
    function createDirectoryAtURL_withIntermediateDirectories_attributes_error (url: NSURL; createIntermediates: boolean; attributes: NSDictionary; error: NSErrorPtr): boolean; message 'createDirectoryAtURL:withIntermediateDirectories:attributes:error:'; { available in 10_7, 5_0 }
  end;

function NSSTR(str: string): NSString; overload;
begin
  result := NSString.stringWithCString_length(@str[1], length(str));
end;

{=============================================}
{@! ___BORDERLESS WINDOW___ } 
{=============================================}

type
  TBorderlessWindow = objcclass (NSWindow)
    public
      function initWithContentRect_styleMask_backing_defer (contentRect: NSRect; aStyle: NSUInteger; bufferingType: NSBackingStoreType; flag: ObjCBool): id; override;
      function initWithContentRect(contentRect: NSRect): id; message 'initWithContentRect:';
      function canBecomeKeyWindow: ObjCBool; override;
      function canBecomeMainWindow: ObjCBool; override;
      procedure setKeepFullScreenAlways (newValue: boolean); message 'setKeepFullScreenAlways:';
    private
      keepFullScreenAlways: boolean;
      procedure screenParametersChanged (notification: NSNotification); message 'screenParametersChanged:';
      procedure dealloc; override;
  end;

function TBorderlessWindow.canBecomeKeyWindow: ObjCBool;
begin
  result := true;
end;

function TBorderlessWindow.canBecomeMainWindow: ObjCBool;
begin
  result := true;
end;

procedure TBorderlessWindow.setKeepFullScreenAlways (newValue: boolean);
begin
  orderFrontRegardless;
  keepFullScreenAlways := newValue;
  if keepFullScreenAlways then
    setFrame_display(screen.frame, true);
end;

procedure TBorderlessWindow.screenParametersChanged (notification: NSNotification);
begin 
  if keepFullScreenAlways then
    setFrame_display(NSScreen.mainScreen.frame, true);
end;

procedure TBorderlessWindow.dealloc;
begin
  NSNotificationCenter.defaultCenter.removeObserver(self);
  inherited dealloc;
end;

function TBorderlessWindow.initWithContentRect_styleMask_backing_defer (contentRect: NSRect; aStyle: NSUInteger; bufferingType: NSBackingStoreType; flag: ObjCBool): id;
begin
  result := inherited initWithContentRect_styleMask_backing_defer(contentRect, aStyle, bufferingType, flag);
  if result <> nil then
    NSNotificationCenter(NSNotificationCenter.defaultCenter).addObserver_selector_name_object(result, objcselector('screenParametersChanged:'), NSApplicationDidChangeScreenParametersNotification, nil);
end;

function TBorderlessWindow.initWithContentRect(contentRect: NSRect): id;
begin
  result := initWithContentRect_styleMask_backing_defer(contentRect, NSBorderlessWindowMask, NSBackingStoreBuffered, false);
  if result <> nil then
    begin 
      result.setMovableByWindowBackground(false);
      //result.setBackgroundColor(NSColor.clearColor);
      //result.setOpaque(false);
      result.setHasShadow(false);
      result.setExcludedFromWindowsMenu(true);
      self := result;
    end;
end;

{=============================================}
{@! ___COCOA WINDOW___ } 
{=============================================}

type
  TCocoaWindow = objcclass (TBorderlessWindow)
    private
      ref: pGLPTwindow;
      procedure close; override;
      procedure becomeKeyWindow; override;
      procedure resignKeyWindow; override;
      procedure doCommandBySelector(aSelector: SEL); override;
  end;

procedure TCocoaWindow.close;
begin
  ref^.shouldClose := true;
  inherited;
end;

procedure TCocoaWindow.doCommandBySelector(aSelector: SEL);
begin
  // do nothing to prevent beeping
end;

procedure TCocoaWindow.becomeKeyWindow;
var
  params: GLPT_MessageParams;
begin
  inherited;
  glptPostMessage(ref, GLPT_MESSAGE_ACTIVATE, params);      
end;

procedure TCocoaWindow.resignKeyWindow;
var
  params: GLPT_MessageParams;
begin
  inherited;
  glptPostMessage(ref, GLPT_MESSAGE_DEACTIVATE, params);
end;

{=============================================}
{@! ___COCOA APP___ } 
{=============================================}

type
  TCocoaApp = objcclass (NSApplication)
    procedure poll; message 'poll';
  end;

type
  TCocoaAppDelegate = objcclass (NSObject, NSApplicationDelegateProtocol)
  end;

function Cocoa_GetKeyboardShiftState: TShiftState; forward;
function Cocoa_GetTime: double; forward;

procedure TCocoaApp.poll;
var
  event: NSEvent;
  params: GLPT_MessageParams;
  win: pGLPTwindow = nil;
  pool: NSAutoreleasePool;
  keymap: GLPTKeymapArrayPtr;
begin
  pool := NSAutoreleasePool.alloc.init;
  event := nextEventMatchingMask_untilDate_inMode_dequeue(NSAnyEventMask, {NSDate.distantPast}nil, NSDefaultRunLoopMode, true);
  if event <> nil then
    begin
      //writeln(event.description.utf8string);

      if event.window <> nil then
        win := TCocoaWindow(event.window).ref;

      case event.type_ of
        NSMouseMoved:
          begin
            params.mouse.x := trunc(event.locationInWindow.x);
            params.mouse.y := trunc(event.locationInWindow.y);
            params.mouse.shiftstate := Cocoa_GetKeyboardShiftState;
            params.mouse.timestamp := Cocoa_GetTime;
            glptPostMessage(win, GLPT_MESSAGE_MOUSEMOVE, params);
          end;
        NSLeftMouseDown, NSRightMouseDown:
          begin
            params.mouse.x := trunc(event.locationInWindow.x);
            params.mouse.y := trunc(event.locationInWindow.y);
            params.mouse.shiftstate := Cocoa_GetKeyboardShiftState;
            params.mouse.timestamp := Cocoa_GetTime;
            case event.type_ of
              NSLeftMouseDown:
                params.mouse.buttons := GLPT_MOUSE_BUTTON_LEFT;
              NSRightMouseDown:
                params.mouse.buttons := GLPT_MOUSE_BUTTON_RIGHT;
            end;
            glptPostMessage(win, GLPT_MESSAGE_MOUSEDOWN, params);
          end;
        NSLeftMouseUp, NSRightMouseUp:
          begin
            params.mouse.x := trunc(event.locationInWindow.x);
            params.mouse.y := trunc(event.locationInWindow.y);
            params.mouse.shiftstate := Cocoa_GetKeyboardShiftState;
            params.mouse.timestamp := Cocoa_GetTime;
            case event.type_ of
              NSLeftMouseUp:
                params.mouse.buttons := GLPT_MOUSE_BUTTON_LEFT;
              NSRightMouseUp:
                params.mouse.buttons := GLPT_MOUSE_BUTTON_RIGHT;
            end;
            glptPostMessage(win, GLPT_MESSAGE_MOUSEUP, params);
          end;
        NSKeyDown, NSKeyUp:
          begin
            // todo: implement UpdateKeymap
            keymap := @GLPT_default_keymap;

            params.keyboard.scancode := darwin_scancode_table[event.keycode];
            params.keyboard.keycode := keymap^[params.keyboard.scancode];
            params.keyboard.shiftstate := Cocoa_GetKeyboardShiftState;
            
            //writeln('scancode:',params.keyboard.scancode);
            //writeln('keycode:',params.keyboard.keycode);
            //writeln('keychar:',chr(params.keyboard.keycode));
            //writeln('name:',GLPT_GetScancodeName(params.keyboard.scancode));

            case event.type_ of
              NSKeyDown:
                glptPostMessage(win, GLPT_MESSAGE_KEYPRESS, params);
              NSKeyUp:
                glptPostMessage(win, GLPT_MESSAGE_KEYRELEASE, params);
            end;
          end;
        otherwise
          ;
      end;

      sendEvent(event);
      updateWindows;
    end;
  pool.release;
end;

{=============================================}
{@! ___OPENGL VIEW___ } 
{=============================================}

type
  TOpenGLView = objcclass (NSView)
    public
      function initWithFrame(frameRect: NSRect): id; override;
      function isOpaque: ObjCBool; override;
    private
      openGLContext: NSOpenGLContext;
      trackingArea: NSTrackingArea;

      function defaultPixelFormat: NSOpenGLPixelFormat; message 'defaultPixelFormat';
      function windowRef: pGLPTwindow; message 'windowRef';

      procedure viewDidMoveToWindow; override;
      procedure mouseEntered(theEvent: NSEvent); override;
      procedure mouseExited(theEvent: NSEvent); override;
      procedure doCommandBySelector(aSelector: SEL); override;
      procedure updateTrackingAreas; override;
      procedure keyDown(theEvent: NSEvent); override;

      procedure frameChanged (sender: NSNotification); message 'frameChanged:';
      procedure drawRect(dirtyRect: NSRect); override;
      procedure reshape; message 'reshape';
  end;

// note: setValues_forParameter in RTL headers is parsed wrong
type
  NSOpenGLContext_Fixed = objccategory external (NSOpenGLContext)
    procedure setValues_forParameter_fixed (vals: pointer; param: NSOpenGLContextParameter); overload; message 'setValues:forParameter:';
  end;

function TOpenGLView.windowRef: pGLPTwindow;
begin
  result := TCocoaWindow(window).ref;
end;

procedure TOpenGLView.updateTrackingAreas;
begin 
  if trackingArea <> nil then
    removeTrackingArea(trackingArea);
  trackingArea := NSTrackingArea.alloc.initWithRect_options_owner_userInfo(bounds, NSTrackingMouseEnteredAndExited + NSTrackingActiveAlways, self, nil).autorelease;
  addTrackingArea(trackingArea);
end;

procedure TOpenGLView.keyDown(theEvent: NSEvent);
begin
  // do nothing to prevent beeping
end;

procedure TOpenGLView.doCommandBySelector(aSelector: SEL);
begin
  // do nothing to prevent beeping
end;

procedure TOpenGLView.mouseEntered(theEvent: NSEvent);
var
   params: GLPT_MessageParams;
begin
  glptPostMessage(windowRef, GLPT_MESSAGE_MOUSEENTER, params);      
end;

procedure TOpenGLView.mouseExited(theEvent: NSEvent);
var
   params: GLPT_MessageParams;
begin
  glptPostMessage(windowRef, GLPT_MESSAGE_MOUSEEXIT, params);   
end;

procedure TOpenGLView.viewDidMoveToWindow;
var
  swapInterval: integer = 1;
  opacity: integer = 0;
begin
  inherited viewDidMoveToWindow;
  
  if openGLContext = nil then
    begin
      openGLContext := NSOpenGLContext.alloc.initWithFormat_shareContext(defaultPixelFormat, nil);
      if openGLContext = nil then
        glptError(GLPT_ERROR_PLATFORM, 'invalid NSOpenGLContext');
      openGLContext.makeCurrentContext;
      openGLContext.setView(self);

      openGLContext.setValues_forParameter_fixed(@swapInterval, NSOpenGLCPSwapInterval);

      if not isOpaque then
        openGLContext.setValues_forParameter_fixed(@opacity, NSOpenGLCPSurfaceOpacity);
    end;
  if window = nil then
    openGLContext.clearDrawable;
end;

procedure TOpenGLView.frameChanged (sender: NSNotification);
begin
  if openGLContext <> nil then
    reshape;
end;

procedure TOpenGLView.drawRect(dirtyRect: NSRect);
begin 
  openGLContext.flushBuffer;
end;

procedure TOpenGLView.reshape;
var
  params: GLPT_MessageParams;
begin
  openGLContext.update;

  if window <> nil then
    begin
      params.rect.top := 0;
      params.rect.left := 0;
      params.rect.width  := trunc(bounds.size.width);
      params.rect.height := trunc(bounds.size.height);
      glptPostMessage(windowRef, GLPT_MESSAGE_RESIZE, params);      
    end;
end;

function TOpenGLView.isOpaque: ObjCBool;
begin
  // return false to make the view transparent
  result := window.backgroundColor.alphaComponent > 0;
end;

function TOpenGLView.defaultPixelFormat: NSOpenGLPixelFormat;
function Inc (var i: integer): integer;
begin
  i += 1;
  result := i;
end;
const
  NSOpenGLPFAOpenGLProfile = 99 { available in 10_7 };
const
  NSOpenGLProfileVersionLegacy = $1000 { available in 10_7 };
  NSOpenGLProfileVersion3_2Core = $3200 { available in 10_7 };
  NSOpenGLProfileVersion4_1Core = $4100 { available in 10_10 };
var
  attributes: array[0..4] of NSOpenGLPixelFormatAttribute;
  i: integer = -1;
  context: GLPT_Context;
begin
  context := TCocoaWindow(window).ref^.context;

  // note: implement this?
  //if (_this->gl_config.accelerated >= 0) {
  //    if (_this->gl_config.accelerated) {
  //        attr[i++] = NSOpenGLPFAAccelerated;
  //    } else {
  //        attr[i++] = NSOpenGLPFARendererID;
  //        attr[i++] = kCGLRendererGenericFloatID;
  //    }
  //}

  if context.doubleBuffer then
    attributes[Inc(i)] := NSOpenGLPFADoubleBuffer;
  attributes[Inc(i)] := NSOpenGLPFAColorSize;
  attributes[Inc(i)] := context.colorSize;
  attributes[Inc(i)] := NSOpenGLPFADepthSize;
  attributes[Inc(i)] := context.depthSize;
  attributes[Inc(i)] := NSOpenGLPFAStencilSize;
  attributes[Inc(i)] := context.stencilSize;
  attributes[Inc(i)] := NSOpenGLPFAOpenGLProfile;
  // note: we can only specify "legacy" or "core" on mac and the system will decide what version we actually get
  if context.profile = GLPT_CONTEXT_PROFILE_LEGACY then
    attributes[Inc(i)] := NSOpenGLProfileVersionLegacy
  else if context.profile = GLPT_CONTEXT_PROFILE_CORE then
    begin
      if context.majorVersion = 3 then
        attributes[Inc(i)] := NSOpenGLProfileVersion3_2Core
      else if context.majorVersion = 4 then
        attributes[Inc(i)] := NSOpenGLProfileVersion4_1Core
      else
        glptError(GLPT_ERROR_PLATFORM, 'invalid core profile major version');
    end
  else
    glptError(GLPT_ERROR_PLATFORM, 'invalid context profile');
  attributes[Inc(i)] := 0;

  result := NSOpenGLPixelFormat.alloc.initWithAttributes(@attributes).autorelease;
  if result = nil then
    glptError(GLPT_ERROR_PLATFORM, 'invalid NSOpenGLPixelFormat');
end;

function TOpenGLView.initWithFrame(frameRect: NSRect): id;
begin
  result := inherited initWithFrame(frameRect);
  if result <> nil then
    NSNotificationCenter(NSNotificationCenter.defaultCenter).addObserver_selector_name_object(result, objcselector('frameChanged:'), NSViewGlobalFrameDidChangeNotification, nil);
end;

{=============================================}
{@! ___GLPT___ } 
{=============================================}

function Cocoa_GetTime: double;
begin
  result := NSDate.date.timeIntervalSince1970;
end;

function Cocoa_Terminate: boolean;
begin
  NSApp.terminate(nil);
  exit(True);
end;

procedure Cocoa_DestroyWindow(var win: pGLPTwindow);
begin
  win^.ref.close;
  win^.ref := nil;
end;

function Cocoa_CreateWindow(win: pGLPTwindow; posx, posy, sizex, sizey: integer; title: PChar): boolean;
const
  NSWindowCollectionBehaviorFullScreenPrimary = 1 shl 7 { available in 10_7 };
  NSWindowCollectionBehaviorFullScreenAuxiliary = 1 shl 8 { available in 10_7 };
var
  window: TCocoaWindow;
  openGLView: TOpenGLView;
  screen: NSScreen;
  windowFlags: NSUInteger = 0;
  flags: longint;
begin
  flags := win^.flags;

  if flags = GLPT_WINDOW_DEFAULT then
    begin
      windowFlags := NSTitledWindowMask + NSClosableWindowMask + NSMiniaturizableWindowMask + NSResizableWindowMask;
    end
  else
    begin
      if flags = (flags or GLPT_WINDOW_TITLED) then
        windowFlags += NSTitledWindowMask;
      if flags = (flags or GLPT_WINDOW_CLOSABLE) then
        windowFlags += NSClosableWindowMask;
      if flags = (flags or GLPT_WINDOW_MINIATURIZABLE) then
        windowFlags += NSMiniaturizableWindowMask;
      if flags = (flags or GLPT_WINDOW_RESIZABLE) then
        windowFlags += NSResizableWindowMask;
      if flags = (flags or GLPT_WINDOW_BORDERLESS) then
        windowFlags := NSBorderlessWindowMask;
    end;

  if flags <> (flags or GLPT_WINDOW_FULLSCREEN) then
    begin
      screen := NSScreen.mainScreen;
      if posx = GLPT_WINDOW_POS_CENTER then
        posx := trunc(NSWidth(screen.frame)/2 - sizex/2);
      if posy = GLPT_WINDOW_POS_CENTER then
        posy := trunc(NSHeight(screen.frame)/2 - sizey/2);

      window := TCocoaWindow.alloc.initWithContentRect_styleMask_backing_defer(NSMakeRect(posx, posy, sizex, sizey), windowFlags, NSBackingStoreBuffered, false);
      window.setTitle(NSSTR(title));
    end
  else
    begin
      window := TCocoaWindow.alloc.initWithContentRect(NSMakeRect(posx, posy, sizex, sizey));
      window.setKeepFullScreenAlways(true);
    end;

  window.ref := win;

  openGLView := TOpenGLView.alloc.initWithFrame(window.contentView.bounds);
  window.setContentView(openGLView);
  openGLView.release;

  window.makeFirstResponder(openGLView);

  window.setCollectionBehavior(NSWindowCollectionBehaviorFullScreenPrimary);
  window.setAcceptsMouseMovedEvents(true);
  window.makeKeyAndOrderFront(nil);

  win^.glcontext := openGLView.openGLContext;
  win^.ref := window;

  exit(True);
end;

function Cocoa_MakeCurrent(win: pGLPTwindow): boolean;
begin
  win^.glcontext.makeCurrentContext;

  exit(True);
end;

procedure Cocoa_SwapBuffers(win: pGLPTwindow);
begin
  win^.ref.contentView.display;
end;

procedure Cocoa_GetFrameBufferSize(win: pGLPTwindow; out width, height: integer);
begin
  width:= trunc(win^.ref.contentView.bounds.size.width);
  height:= trunc(win^.ref.contentView.bounds.size.height);
end;

procedure Cocoa_PollEvents;
begin
  // note: do we really need to call on main thread? isn't the first thread "main"?
  //TCocoaApp(TCocoaApp.sharedApplication).poll;
  NSApp.performSelectorOnMainThread_withObject_waitUntilDone(objcselector('poll'), nil, true);
end;

procedure Cocoa_GetDisplayCoords(var dr: GLPTRect);
var
  screenFrame: NSRect;
begin
  screenFrame := NSScreen.mainScreen.frame;

  dr.top := trunc(NSMinY(screenFrame));
  dr.left := trunc(NSMinX(screenFrame));
  dr.bottom := trunc(NSMaxY(screenFrame));
  dr.right := trunc(NSMaxX(screenFrame));
end;

function Cocoa_GetBasePath: string;
begin
  result := NSBundle.mainBundle.resourcePath.UTF8String+'/';
end;

function Cocoa_GetPrefPath (org: string; app: string): string;
var
  applicationSupport: NSURL;
  identifier: NSString;
  folder: NSURL;
begin
  applicationSupport := NSFileManager.defaultManager.URLForDirectory_inDomain_appropriateForURL_create_error(NSApplicationSupportDirectory, NSUserDomainMask, nil, false, nil);
  result := applicationSupport.path.UTF8String+'/'+org+'/'+app+'/';
  folder := NSURL.fileURLWithPath(NSSTR(result));
  NSFileManager.defaultManager.createDirectoryAtURL_withIntermediateDirectories_attributes_error(folder, true, nil, nil);
end;

function Cocoa_GetKeyboardShiftState: TShiftState;
var
  modifierFlags: NSUInteger;
begin
  modifierFlags := NSApp.currentEvent.modifierFlags;
  Result := [];

  if modifierFlags = (modifierFlags or NSShiftKeyMask) then
    Include(Result, ssShift);

  if modifierFlags = (modifierFlags or NSControlKeyMask) then
    Include(Result, ssCtrl);

  if modifierFlags = (modifierFlags or NSAlternateKeyMask) then
    Include(Result, ssAlt);

  if modifierFlags = (modifierFlags or NSCommandKeyMask) then
    Include(Result, ssSuper);
end;


procedure SetupMainMenu;

  procedure AddMenu (menu: NSMenu);
  var
    menuItem: NSMenuItem;
  begin
    menuItem := NSMenuItem.alloc.initWithTitle_action_keyEquivalent(menu.title, nil, NSSTR('')).autorelease;
    menuItem.setSubmenu(menu);
    NSApp.mainMenu.addItem(menuItem);
  end;

var
  mainMenu: NSMenu;
  appleMenu: NSMenu;
  windowMenu: NSMenu;
begin

  // main menu
  mainMenu := NSMenu.alloc.init.autorelease;
  NSApp.setMainMenu(mainMenu);

  // apple menu
  appleMenu := NSMenu.alloc.initWithTitle(NSSTR('')).autorelease;
  appleMenu.addItemWithTitle_action_keyEquivalent(NSSTR('Quit '+NSProcessInfo.processInfo.processName.UTF8String), objcselector('terminate:'), NSSTR('q'));

  AddMenu(appleMenu);

  // window menu
  windowMenu := NSMenu.alloc.initWithTitle(NSSTR('Window')).autorelease;
  windowMenu.addItemWithTitle_action_keyEquivalent(NSSTR('Minimize'), objcselector('performMiniaturize:'), NSSTR('m'));
  windowMenu.addItemWithTitle_action_keyEquivalent(NSSTR('Zoom'), objcselector('performZoom:'), NSSTR(''));

  AddMenu(windowMenu);
end;

function Cocoa_Init: boolean;
var
  pool: NSAutoreleasePool;
  app: TCocoaApp;
  delegate: TCocoaAppDelegate;
begin  

  // set mac specific keynames
  GLPT_scancode_names[GLPT_SCANCODE_LALT] := 'Left Option';
  GLPT_scancode_names[GLPT_SCANCODE_LGUI] := 'Left Command';
  GLPT_scancode_names[GLPT_SCANCODE_RALT] := 'Right Option';
  GLPT_scancode_names[GLPT_SCANCODE_RGUI] := 'Right Command';

  // https://hero.handmade.network/forums/code-discussion/t/1409-main_game_loop_on_os_x

  pool := NSAutoreleasePool.alloc.init;

  app := TCocoaApp(TCocoaApp.sharedApplication);
  
  delegate := TCocoaAppDelegate.alloc.init;
  app.setDelegate(delegate);

  NSApp.setActivationPolicy(NSApplicationActivationPolicyRegular);
  NSApp.activateIgnoringOtherApps(true);

  if NSApp.mainMenu = nil then
    SetupMainMenu;
  app.finishLaunching;

  pool.release;

  exit(True);
end;

procedure Cocoa_SetCursor(cursor: byte);
begin
  case cursor of
    GLPT_ARROW_CURSOR:
      NSCursor.arrowCursor.set_;
    GLPT_IBEAM_CURSOR:
      NSCursor.IBeamCursor.set_;
    GLPT_CROSSHAIR_CURSOR:
      NSCursor.crosshairCursor.set_;
    GLPT_HAND_CURSOR:
      NSCursor.openHandCursor.set_;
    GLPT_HRESIZE_CURSOR:
      NSCursor.resizeLeftRightCursor.set_;
    GLPT_VRESIZE_CURSOR:
      NSCursor.resizeUpDownCursor.set_;
    otherwise
      begin
        NSCursor.arrowCursor.set_;
        glptError(GLPT_ERROR_PLATFORM, 'cursor is not supported, using GLPT_ARROW_CURSOR instead.');
      end;
  end;
end;

procedure Cocoa_SetVSync(sync: boolean);
begin
  {$note implement this}
end;
